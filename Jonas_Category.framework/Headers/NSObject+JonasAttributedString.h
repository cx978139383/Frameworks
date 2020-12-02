//
//  NSObject+JonasAttributedString.h
//  JonasSDK
//
//  Created by Jonas on 16/8/3.
//  Copyright © 2016年 Jonas. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

/**
 *  如果只是单独使用attributedStr传递nil
 */
@interface NSObject(JonasAttributedString)

/**
 *  单纯改变段落缩进（需要 <CoreText/CoreText.h>）
 *
 *  @param totalString 需要更改的字符串
 *  @param space       收尾缩进距离
 *
 *  @return 生成的富文本
 */
-(NSMutableAttributedString *)ls_indentWithTotalString:(NSString *)totalString Space:(CGFloat)space attributedStr:(NSMutableAttributedString *)attributedStr;

/**
 *  单纯改变一句话中的某些字的颜色
 *
 *  @param color    需要改变成的颜色
 *  @param totalStr 总的字符串
 *  @param subArray 需要改变颜色的文字数组
 *
 *  @return 生成的富文本
 */
- (NSMutableAttributedString *)ls_changeCorlorWithColor:(UIColor *)color TotalString:(NSString *)totalStr SubStringArray:(NSArray *)subArray attributedStr:(NSMutableAttributedString *)attributedStr ;

/**
 *  单纯改变句子的字间距（需要 <CoreText/CoreText.h>）
 *
 *  @param totalString 需要更改的字符串
 *  @param space       字间距
 *
 *  @return 生成的富文本
 */
- (NSMutableAttributedString *)ls_changeSpaceWithTotalString:(NSString *)totalString Space:(CGFloat)space attributedStr:(NSMutableAttributedString *)attributedStr;

/**
 *  单纯改变段落的行间距
 *
 *  @param totalString 需要更改的字符串
 *  @param lineSpace   行间距
 *
 *  @return 生成的富文本
 */
- (NSMutableAttributedString *)ls_changeLineSpaceWithTotalString:(NSString *)totalString LineSpace:(CGFloat)lineSpace attributedStr:(NSMutableAttributedString *)attributedStr;

/**
 *  同时更改行间距和字间距
 *
 *  @param totalString 需要改变的字符串
 *  @param lineSpace   行间距
 *  @param textSpace   字间距
 *
 *  @return 生成的富文本
 */
- (NSMutableAttributedString *)ls_changeLineAndTextSpaceWithTotalString:(NSString *)totalString LineSpace:(CGFloat)lineSpace textSpace:(CGFloat)textSpace attributedStr:(NSMutableAttributedString *)attributedStr;

/**
 *  改变某些文字的颜色 并单独设置其字体
 *
 *  @param font        设置的字体
 *  @param color       颜色
 *  @param totalString 总的字符串
 *  @param subArray    想要变色的字符数组
 *
 *  @return 生成的富文本
 */
- (NSMutableAttributedString *)ls_changeFontAndColor:(UIFont *)font Color:(UIColor *)color TotalString:(NSString *)totalString SubStringArray:(NSArray *)subArray attributedStr:(NSMutableAttributedString *)attributedStr ;

/**
 *  为某些文字改为链接形式
 *
 *  @param totalString 总的字符串
 *  @param subArray    需要改变颜色的文字数组(要是有相同的 只取第一个)
 *
 *  @return 生成的富文本
 */
- (NSMutableAttributedString *)ls_addLinkWithTotalString:(NSString *)totalString SubStringArray:(NSArray *)subArray attributedStr:(NSMutableAttributedString *)attributedStr;
@end
