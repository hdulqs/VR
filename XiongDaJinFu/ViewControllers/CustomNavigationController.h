//
//  CustomNavigationController.h
//  CustomNavigationBarDemo
//
//  Created by gary on 16/12/1.
//  Copyright © 2016年 digirun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomNavigationController : UINavigationController
@property (nonatomic,copy) void(^backButtonClickBlock)();
// 是否可右滑返回
- (void)navigationCanDragBack:(BOOL)bCanDragBack;
@property (nonatomic, assign)UIInterfaceOrientationMask orientationMask;
@property(nonatomic)NSUInteger orietation;

@end
