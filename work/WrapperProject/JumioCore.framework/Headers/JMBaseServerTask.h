//
//  JMBaseServerTask.h
//  JumioCore
//
//  Created by Lukas Danzer on 04/08/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, HTTPMethod) {
    HTTPMethodGET,
    HTTPMethodPOST,
    HTTPMethodPUT,
    HTTPMethodDELETE
};

typedef NS_ENUM(NSInteger, ContentType) {
    ContentTypeJSON,
    ContentTypeImage,
    ContentTypeMultipartForm,
    ContentTypeTemplate
};

@interface JMBaseServerTaskConfiguration : NSObject

@property (nonatomic, strong) NSURLSession *session;
@property (nonatomic, strong) NSString *baseURL;
@property (nonatomic, strong) NSString *fallbackURL;
@property (nonatomic, strong) NSString *merchantReportingCriteria;
@property (nonatomic, strong) NSString *merchantApiToken;
@property (nonatomic, strong) NSString *merchantApiSecret;
@property (nonatomic, strong) NSString *trackingId;
@property (nonatomic, strong) NSString *jumioIdScanReference;
@property (nonatomic, assign) BOOL useFallback;

@end

@interface JMBaseServerTask : NSObject {
    
    /* Needs to be set explicitly, default constructor default values are the following: */
    HTTPMethod _method; /* Default: GET*/
    ContentType _accept; /* Default: JSON */
    ContentType _contetType; /* Default: JSON */
    BOOL _automaticRepeat; /* Default: NO */
    
    NSString *_authenticationValue;
    
    NSString* _boundary;
}

@property (nonatomic, strong) JMBaseServerTaskConfiguration *baseConfig;
@property (nonatomic, assign) float timeoutInterval;
@property (nonatomic, assign) BOOL emptyResponseExpected;
@property (nonatomic, assign) uint64_t requestStartTime;
@property (nonatomic, assign) BOOL isCanceled;

- (instancetype) initWithConfiguration:(JMBaseServerTaskConfiguration *)configuration;

/* Needs to be implemented in all the subclasses. */
- (HTTPMethod)method;
- (NSString *)requestPath;
- (NSDictionary *)requestParameters;



@end
