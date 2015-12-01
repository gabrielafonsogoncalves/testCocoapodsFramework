//
//  JMThemeableButton.h
//
//  Created by iOSDev on 6/26/13.
//  Copyright (c) 2013 Jumio Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JMThemeableButton : UIButton
@property (nonatomic, assign) CGFloat cornerRadius;

- (instancetype)initWithSize:(CGSize)size;

- (void)setBackgroundColor:(UIColor *)backgroundColor forState:(UIControlState)state UI_APPEARANCE_SELECTOR;
- (UIColor *)backgroundColorForState:(UIControlState)state UI_APPEARANCE_SELECTOR;

- (void)setTitle:(NSString *)title;

- (void)setDefaultValues;

@end





