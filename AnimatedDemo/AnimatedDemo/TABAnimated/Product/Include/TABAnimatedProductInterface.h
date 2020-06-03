//
//  TABAnimatedProductInterface.h
//  AnimatedDemo
//
//  Created by tigerAndBull on 2020/4/1.
//  Copyright © 2020 tigerAndBull. All rights reserved.
//

#ifndef TABAnimatedProductInterface_h
#define TABAnimatedProductInterface_h

#import "TABAnimatedProductDefines.h"

@class UIView;

@protocol TABAnimatedProductInterface <NSObject>

// 生产view并生产骨架元素
- (nonnull __kindof UIView *)productWithControlView:(nonnull UIView *)controlView
                                       currentClass:(nonnull Class)currentClass
                                          indexPath:(nullable NSIndexPath *)indexPath
                                             origin:(TABAnimatedProductOrigin)origin;

// 生产骨架元素
- (void)productWithView:(nonnull UIView *)view
            controlView:(nonnull UIView *)controlView
           currentClass:(nonnull Class)currentClass
              indexPath:(nullable NSIndexPath *)indexPath
                 origin:(TABAnimatedProductOrigin)origin;

- (void)productWithView:(nonnull UIView *)view
            controlView:(nonnull UIView *)controlView
           currentClass:(nonnull Class)currentClass
              indexPath:(nullable NSIndexPath *)indexPath
                 origin:(TABAnimatedProductOrigin)origin
         productByClass:(BOOL)productByClass;

- (nullable TABAnimatedProduction *)productWithControlView:(nonnull UIView *)controlView currentClass:(nonnull Class)currentClass;

- (void)destory;

@end

#endif /* TABAnimatedProductInterface_h */
