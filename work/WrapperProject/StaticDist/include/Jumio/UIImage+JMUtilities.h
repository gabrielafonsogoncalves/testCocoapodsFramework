//
//  UIImage+Extensions.h
//  NetswipeCore
//
//  Created by Hardy Macia on 7/1/09.
//  Copyright 2009 Catamount Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (JMUtilities)
- (UIImage *)JMimageAtRect:(CGRect)rect;
- (UIImage *)JMimageByScalingProportionallyToMinimumSize:(CGSize)targetSize;
- (UIImage *)JMimageByScalingProportionallyToSize:(CGSize)targetSize;
- (UIImage *)JMimageByScalingToSize:(CGSize)targetSize;
- (UIImage *)JMimageRotatedByRadians:(CGFloat)radians;
- (UIImage *)JMimageRotatedByDegrees:(CGFloat)degrees;


-(BOOL)JMsaveToJPEGFile:(NSString *)filename Quality:(float)quality;
-(BOOL)JMsaveToPNGFile:(NSString *)filename;

-(void)JMsaveDiffImageFromImage:(UIImage *)img2 InJPEG:(BOOL)isJPEG Quality:(float)quality Filename:(NSString *)filename;
-(void)JMsaveCombinedImageFromImage:(UIImage *)img2 InJPEG:(BOOL)isJPEG Quality:(float)quality Filename:(NSString *)filename;

+(UIImage *)JMloadFromUserFile:(NSString *)filename;
+(BOOL)JMsaveRawData:(unsigned char *)buffer Length:(int)len Filename:(NSString *)filename;

- (UIImage *)JMapplyBlurEffectWithRadius:(CGFloat)radius;
- (UIImage*)JMimageByScalingAndCroppingForSize:(CGSize)targetSize;

+ (UIImage *)JMimageWithColor:(UIColor *)color;

@end
