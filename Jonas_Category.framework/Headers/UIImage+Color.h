//
//  UIImage+Color.h
//  JonasBI
//
//  Created by 王腾 on 2017/6/12.
//
//

#import <UIKit/UIKit.h>

@interface UIImage (Color)
//改变图片颜色，方法用的时候图片要注意，有些不显示的地方要用透明不能用白色，要不白色也会被改变
- (UIImage *)imageWithColor:(UIColor *)color;
@end
