//
//  UIButton+Category.m
//  League
//
//  Created by 魏航 on 16/6/3.
//  Copyright © 2016年 com.winwho. All rights reserved.
//

#import "UIButton+Category.h"

@implementation UIButton (Category)

- (void)setNormalTitle:(NSString *)title
{
    [self setTitle:title forState:UIControlStateNormal];
}

- (void)setTitleNormalColor:(UIColor *)color
{
    [self setTitleColor:color forState:UIControlStateNormal];
}

-(void)setTitleHighColor:(UIColor *)color{
    [self setTitleColor:color forState:UIControlStateHighlighted];
}
- (void)setEnabled:(BOOL)enabled withBackgroudColor:(UIColor *)color withTitleColor:(UIColor *)titleColor{
    self.enabled = enabled;
    self.backgroundColor = color;
    [self setTitleNormalColor: titleColor];
}
- (void)setNormalImage:(UIImage *)image
{
    [self setImage:image forState:UIControlStateNormal];
}

- (void)setHighImage:(UIImage *)image
{
    [self setImage:image forState:UIControlStateHighlighted];
}

-(void)setNormalBgColor:(UIColor *)color{
    [self setBackgroundImage:[self createImageWithColor:color] forState:UIControlStateNormal];
}

-(void)setHighColor:(UIColor *)color{
    [self setBackgroundImage:[self createImageWithColor:color] forState:UIControlStateHighlighted];
}

- (void)setNormalBackgroundImage:(UIImage *)image
{
    [self setBackgroundImage:image forState:UIControlStateNormal];
}

- (void)setHighBackgroundImage:(UIImage *)image
{
    [self setBackgroundImage:image forState:UIControlStateHighlighted];
}

- (void)addTarget:(id)target Action:(SEL)action
{
    [self addTarget:target action:action forControlEvents:UIControlEventTouchUpInside];
}


-(UIImage*) createImageWithColor:(UIColor*) color
{
    CGRect rect=CGRectMake(0.0f, 0.0f, 1.0f, 1.0f);
    UIGraphicsBeginImageContext(rect.size);
    CGContextRef context = UIGraphicsGetCurrentContext();
    CGContextSetFillColorWithColor(context, [color CGColor]);
    CGContextFillRect(context, rect);
    UIImage *theImage = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return theImage;
}

- (void)verticalImageAndTitle:(CGFloat)spacing
{
    CGSize imageSize = self.imageView.frame.size;
    CGSize titleSize = self.titleLabel.frame.size;
    CGSize textSize = [self.titleLabel.text boundingRectWithSize:CGSizeZero options:0|1 attributes:@{ NSFontAttributeName :  self.titleLabel.font} context:nil].size;
    CGSize frameSize = CGSizeMake(ceilf(textSize.width), ceilf(textSize.height));
    if (titleSize.width + 0.5 < frameSize.width) {
        titleSize.width = frameSize.width;
    }
    CGFloat totalHeight = (imageSize.height + titleSize.height + spacing);
    self.imageEdgeInsets = UIEdgeInsetsMake(- (totalHeight - imageSize.height), 0.0, 0.0, - titleSize.width);
    self.titleEdgeInsets = UIEdgeInsetsMake(0, - imageSize.width, - (totalHeight - titleSize.height), 0);
}
/*
- (void)drawbadgeWithBadgeValue:(NSString *)badgeValue andFont:(UIFont *)badgeTextFont andTestColor:(UIColor *)badgeTextColor andBgColor:(UIColor *)badgeBackgroundColor
{
    CGSize frameSize = self.frame.size;
    UIImage *image = nil;
    
    CGContextRef context = UIGraphicsGetCurrentContext();
//    CGContextSaveGState(context);

    if ([badgeValue integerValue] != 0) {
        CGSize badgeSize = CGSizeZero;
        
        badgeSize = [badgeValue boundingRectWithSize:CGSizeMake(frameSize.width, 20)
                                             options:NSStringDrawingUsesLineFragmentOrigin
                                          attributes:@{NSFontAttributeName:badgeTextFont}
                                             context:nil].size;
        
        CGFloat textOffset = 2.0f;
        
        if (badgeSize.width < badgeSize.height) {
            badgeSize = CGSizeMake(badgeSize.height, badgeSize.height);
        }
        
        CGRect badgeBackgroundFrame = CGRectMake(roundf(frameSize.width / 2 + (image.size.width / 2) * 0.9) +
                                                 UIOffsetZero.horizontal,
                                                 textOffset + UIOffsetZero.vertical,
                                                 badgeSize.width + 2 * textOffset, badgeSize.height + 2 * textOffset);
        
        if (badgeBackgroundColor) {
            CGContextSetFillColorWithColor(context, [badgeBackgroundColor CGColor]);
            
            CGContextFillEllipseInRect(context, badgeBackgroundFrame);
        } else if ([self badgeBackgroundImage]) {
            [[self badgeBackgroundImage] drawInRect:badgeBackgroundFrame];
        }
        
        CGContextSetFillColorWithColor(context, [badgeTextColor CGColor]);
        
        if (NSFoundationVersionNumber > NSFoundationVersionNumber_iOS_6_1) {
            NSMutableParagraphStyle *badgeTextStyle = [[NSMutableParagraphStyle defaultParagraphStyle] mutableCopy];
            [badgeTextStyle setLineBreakMode:NSLineBreakByWordWrapping];
            [badgeTextStyle setAlignment:NSTextAlignmentCenter];
            
            NSDictionary *badgeTextAttributes = @{
                                                  NSFontAttributeName: badgeTextFont,
                                                  NSForegroundColorAttributeName: badgeTextColor,
                                                  NSParagraphStyleAttributeName: badgeTextStyle,
                                                  };
            
            [badgeValue drawInRect:CGRectMake(CGRectGetMinX(badgeBackgroundFrame) + textOffset,
                                                     CGRectGetMinY(badgeBackgroundFrame) + textOffset,
                                                     badgeSize.width, badgeSize.height)
                           withAttributes:badgeTextAttributes];
        } else {
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_7_0
            [badgeValue drawInRect:CGRectMake(CGRectGetMinX(badgeBackgroundFrame) + textOffset,
                                                     CGRectGetMinY(badgeBackgroundFrame) + textOffset,
                                                     badgeSize.width, badgeSize.height)
                                 withFont:badgeTextFont
                            lineBreakMode:NSLineBreakByTruncatingTail
                                alignment:NSTextAlignmentCenter];
#endif
        }
    }
    
    CGContextRestoreGState(context);
    
}
 */
@end
