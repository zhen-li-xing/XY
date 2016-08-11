//
//  NSString+Extensions.m
//  League
//
//  Created by 魏航 on 16/5/31.
//  Copyright © 2016年 com.winwho. All rights reserved.
//

#import <CommonCrypto/CommonDigest.h>
#import <UIKit/UIKit.h>

@implementation NSString (Extensions)

/**
 *  中文字符数量
 *
 *  @return <#return value description#>
 */
-(NSInteger) chineseCharacterNum{
    int num=0;
    for(int i=0; i< [self length];i++){
        int a = [self characterAtIndex:i];
        if( a > 0x4e00 && a < 0x9fff)
            num++;
    }
    return num;
}

//  去空
- (NSString *)trim {
    return [self stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceAndNewlineCharacterSet]];
}

//是否是空字符串
- (BOOL)isEmpty {
    
    if ([self isKindOfClass:[NSNull class]])
    {
        return YES;
    }
    if (self.length==0) {
        return YES;
    }
    if(self){
        NSCharacterSet *charSet = [NSCharacterSet whitespaceAndNewlineCharacterSet];
        NSString *trimmed = [self stringByTrimmingCharactersInSet:charSet];
        return [trimmed isEqualToString:@""];
    }else{
        return YES;
    }
}

// 正则判断手机号码地址格式
- (BOOL)isMobileNumber
{
    NSString *Regex =@"(13[0-9]|14[57]|15[0-9]|18[0-9]|17[0-9])\\d{8}";//^[1][3-8]+\\d{9}
    NSPredicate *mobileTest = [NSPredicate predicateWithFormat:@"SELF MATCHES %@", Regex];
    return [mobileTest evaluateWithObject:self];
}
// 正则判断身份证号码地址格式
- (BOOL)isPersonCard
{
    BOOL flag;
    if (self.length <= 0) {
        flag = NO;
        return flag;
    }
    NSString *regex2 = @"^(\\d{14}|\\d{17})(\\d|[xX])$";
    NSPredicate *identityCardPredicate = [NSPredicate predicateWithFormat:@"SELF MATCHES %@",regex2];
    return [identityCardPredicate evaluateWithObject:self];
}
// 获取手机尺寸路径
+ (NSString *)getMobileImgPath:(NSString *)imgPath
{
    if (imgPath && ![imgPath isKindOfClass:[NSNull class]]&& ![imgPath isEqualToString:@""]) {
        
        NSArray *array = [imgPath componentsSeparatedByString:@"/"];
        NSMutableArray *sepArray = [NSMutableArray arrayWithArray:array];
        
        NSString *lastStr = [sepArray lastObject];
        lastStr = [NSString stringWithFormat:@"/mobile_%@",lastStr];
        
        [sepArray removeLastObject];
        NSString *firstStr = [sepArray componentsJoinedByString:@"/"];
        
        NSString *fullStr = [NSString stringWithFormat:@"%@%@",firstStr,lastStr];
        
        return fullStr;
    }
    return nil;
}

// 获取加水印图片路径
+ (NSString *)getWaterImgPath:(NSString *)imgPath
{
    if (imgPath && ![imgPath isKindOfClass:[NSNull class]]&& ![imgPath isEqualToString:@""]) {
        
        NSArray *array = [imgPath componentsSeparatedByString:@"/"];
        NSMutableArray *sepArray = [NSMutableArray arrayWithArray:array];
        
        NSString *lastStr = [sepArray lastObject];
        lastStr = [NSString stringWithFormat:@"/water_%@",lastStr];
        
        [sepArray removeLastObject];
        NSString *firstStr = [sepArray componentsJoinedByString:@"/"];
        
        NSString *fullStr = [NSString stringWithFormat:@"%@%@",firstStr,lastStr];
        
        return fullStr;
    }
    return nil;
}

- (CGFloat)widthWithFont:(CGFloat)fontSize
{
    return [self boundingRectWithSize:CGSizeZero options:NSStringDrawingUsesLineFragmentOrigin | NSStringDrawingUsesFontLeading attributes:@{ NSFontAttributeName :  [UIFont systemFontOfSize:fontSize]} context:nil].size.width;
}

- (CGFloat)HeightWithFont:(CGFloat)fontSize withSize:(CGSize)size
{
    return [self boundingRectWithSize:size options:NSStringDrawingUsesLineFragmentOrigin | NSStringDrawingUsesFontLeading attributes:@{ NSFontAttributeName :  [UIFont systemFontOfSize:fontSize]} context:nil].size.height;
}

+ (NSDate *) dateFromString:(NSString *)str
{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    [dateFormatter setDateFormat: @"yyyy-MM-dd HH:mm:ss"];
    NSDate *destDate= [dateFormatter dateFromString:str];
    return destDate;
}

+ (NSString *) stringFromDate:(NSDate *)date
{
    NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
    //zzz表示时区，zzz可以删除，这样返回的日期字符将不包含时区信息。
    [dateFormatter setDateFormat:@"yyyy-MM-dd HH:mm:ss zzz"];
    NSString *destDateString = [dateFormatter stringFromDate:date];
    return destDateString;
}

//汉字的拼音
- (NSString *)pinyin{
    NSMutableString *str = [self mutableCopy];
    CFStringTransform(( CFMutableStringRef)str, NULL, kCFStringTransformMandarinLatin, NO);
    CFStringTransform((CFMutableStringRef)str, NULL, kCFStringTransformStripDiacritics, NO);
    
    return [str stringByReplacingOccurrencesOfString:@" " withString:@""];
}
@end