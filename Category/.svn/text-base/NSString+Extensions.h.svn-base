//
//  NSString+Extensions.h
//  League
//
//  Created by 魏航 on 16/5/31.
//  Copyright © 2016年 com.winwho. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Extensions)

// 中文字符数量
-(NSInteger) chineseCharacterNum;

//是否是空字符串
- (BOOL)isEmpty;

//  去空
- (NSString *)trim;

// 正则判断手机号码地址格式
- (BOOL)isMobileNumber;
- (BOOL)isPersonCard;

// 获取手机尺寸路径
+ (NSString *)getMobileImgPath:(NSString *)imgPath;

// 获取加水印图片路径
+ (NSString *)getWaterImgPath:(NSString *)imgPath;

// 时间字符串转 NSDate
+ (NSDate *) dateFromString:(NSString *)str;

// NSDate 转 字符串
+ (NSString *) stringFromDate:(NSDate *)date;


// 根据字体大小 获取文本宽度
- (CGFloat)widthWithFont:(CGFloat)fontSize;

// 根据字体大小 获取文本高度
- (CGFloat)HeightWithFont:(CGFloat)fontSize withSize:(CGSize)size;
/**
 *  汉字的拼音
 *
 *  @return 拼音
 */
- (NSString *)pinyin;

@end
