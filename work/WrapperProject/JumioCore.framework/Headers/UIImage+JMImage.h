//
//  UIImage+JMImage.h
//  JumioMobileSDK
//
//  Created by Christian Neudorfer on 11.07.14.
//  Copyright (c) 2014 Jumio Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (JMImage)

+ (NSData*) jumioLookupResourceWithName: (NSString*) resourceName;
+ (UIImage*) jumioImageNamed: (NSString*) imageName;

@end
