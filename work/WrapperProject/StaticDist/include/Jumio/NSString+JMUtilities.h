//
//  NSString+JMUtilities.h
//  NetswipeMobileSDK
//
//  Created by iOSDev on 9/24/13.
//  Copyright (c) 2013 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (JMUtilities)

- (NSString *) JMtrimStringToMaximumLength: (NSUInteger) maxLength;

- (NSString *) JMsecureSubstringFromIndex:(NSUInteger)index;
+ (NSString *) JMformatString:(NSString *)string forMaximumLength:(NSUInteger)maxLength regex:(NSString *)regex;
+ (NSString *) JMTrimLeadingTrailingWhiteSpaceFromString:(NSString*)string;
+ (NSString *) JMFormatStringByTrimmingLeadingAndTrailingWhiteSpace:(NSString *)string forMaximumLength:(NSUInteger)maxLength;
+ (NSString *) JMFormatStringByTrimmingLeadingAndTrailingWhiteSpace:(NSString *)string forMaximumLength:(NSUInteger)maxLength withRegex:(NSString*)regex;
- (NSUInteger) JMindexOf:(NSString *)text;

- (BOOL) isValidISO3166Alpha3CountryCode;

@end
