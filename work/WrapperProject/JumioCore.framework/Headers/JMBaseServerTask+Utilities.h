//
//  NMBaseServerTask+Utilities.h
//  Netverify.me
//
//  Created by Hunor Szabo on 29/04/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import "JMBaseServerTask.h"

// Configurations
extern NSInteger kMaximumRenewAttempts;

// Header Keys
extern NSString *const kConfigurationKeyAuthorization;
extern NSString *const kConfigurationKeyAccept;
extern NSString *const kConfigurationKeyContentType;

extern NSString *const kConfigurationValueJSON;
extern NSString *const kConfigurationValueALE;
extern NSString *const kConfigurationValueMultipartForm;

extern NSString *const kConfigurationValueBoundary;
extern NSString *const kConfigurationValueImageJPEG;
extern NSString *const kConfigurationValueImage;

extern NSString *const kConfigurationValueBearer;

@interface JMBaseServerTask (Utilities)

- (NSString *)stringFromHTTPMethod:(HTTPMethod)method;
- (NSString *)contentTypeString:(ContentType)contentType;
- (NSString *)stringFromContentType:(ContentType)accept;

- (NSString *)boundary;
@end
