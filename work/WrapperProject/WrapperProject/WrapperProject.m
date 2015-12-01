//
//  WrapperProject.m
//  WrapperProject
//
//  Created by Michael Moscardini on 11/18/15.
//  Copyright © 2015 Michael Moscardini. All rights reserved.
//

#import "WrapperProject.h"

#import "NSDictionary+StaticTest.h"
#import "NSString+JMHashing.h"

@implementation WrapperProject

- (void)testMethod
{
    NSDictionary *dict = @{};
    [dict mm_testMethod];
    [@"example" JMsha1String];
}

@end
