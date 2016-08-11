//
//  UILabel+Category.m
//  League
//
//  Created by 魏航 on 16/6/7.
//  Copyright © 2016年 com.winwho. All rights reserved.
//

#import "UILabel+Category.h"
#import "NSString+Extensions.h"

@implementation UILabel (Category)

- (CGFloat)getHeight
{
    return [self getHeightWithLines:0];
}

- (CGFloat)getHeightWithLines:(CGFloat)numberOfLines
{
    self.numberOfLines = numberOfLines;
    CGSize maximumLabelSize = CGSizeMake(self.frame.size.width,9999999);
    return [self.text boundingRectWithSize:maximumLabelSize
                                   options:NSStringDrawingUsesLineFragmentOrigin | NSStringDrawingUsesFontLeading
                                attributes:@{ NSFontAttributeName :  self.font}
                                   context:nil].size.height;
}

- (CGFloat)getWidth
{
    CGSize maximumLabelSize = CGSizeMake(0, self.height);
    return [self.text boundingRectWithSize:maximumLabelSize
                                   options:NSStringDrawingUsesLineFragmentOrigin | NSStringDrawingUsesFontLeading
                                attributes:@{ NSFontAttributeName :  self.font}
                                   context:nil].size.width;
}
/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end
