//
//  JMTextUtilities.h
//  JumioCore
//
//  Created by Cosmin-Valentin Popescu on 27/04/15.
//  Copyright (c) 2015 Jumio Inc. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface JMStringUtilities : NSObject

+ (NSDictionary *)stringAttributesDictionaryWithFont:(UIFont * const)font fontColor:(UIColor * const)fontColor shadow:(NSShadow * const)shadow alignment:(NSTextAlignment) alignment;

@end
