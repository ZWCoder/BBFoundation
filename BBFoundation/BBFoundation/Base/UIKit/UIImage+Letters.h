//
//  UIImage+Letters.h
//  BBFoundation
//
//  Created by Gary on 5/26/15.
//  Copyright (c) 2014 BBFoundation. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIAdditions.h"

@interface UIImage (Letters)

+ (UIImage *)imageWithString:(NSString *)string size:(CGSize)size;

+ (UIImage *)imageWithString:(NSString *)string size:(CGSize)size color:(UIColor *)color;

+ (UIImage *)tf_imageNamed:(NSString *)name;

@end
