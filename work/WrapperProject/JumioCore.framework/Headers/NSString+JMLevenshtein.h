//
//  NSString+JMLevenshtein.h
//  JumioMobileSDK
//
//  Created by Christian Neudorfer on 11.09.14.
//  Copyright (c) 2014 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (JMLevenshtein)

- (NSUInteger) JMLevenshteinDistanceToString:(NSString *)string;

- (NSString*) JMRemoveMiddleName;

+ (NSInteger) JMDistanceBetweenNames:(NSString*)nameA nameB:(NSString*)nameB;

@end
