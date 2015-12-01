//
//  UIView+NSWFrameManipulations.h
//  NetswipeOCRCore
//
//  Created by Martin Reichart on 19.04.12.
//  Copyright (c) 2012 Jumio Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (JMFrameManipulations)

- (CGRect) JMsizeForOrientation:(UIInterfaceOrientation)interfaceOrientation;
- (CGSize) JMflipSize:(CGSize)size forOrientation:(UIInterfaceOrientation)interfaceOrientation;

+ (CGAffineTransform) JMtransformForRotationToOrientation: (UIInterfaceOrientation) newOrientation;
+ (UIInterfaceOrientation) JMinterfaceOrientationFromDeviceOrientation: (UIDeviceOrientation) deviceOrientation;
+ (UIInterfaceOrientation) JMinterfaceOrientationFromCurrentDeviceOrientation;

@end
