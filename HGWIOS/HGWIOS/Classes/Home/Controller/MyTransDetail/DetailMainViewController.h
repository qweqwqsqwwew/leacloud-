//
//  DetailMainViewController.h
//  HGWIOS
//
//  Created by mac on 2018/5/31.
//  Copyright © 2018年 Developer. All rights reserved.
//

#import <YPTabBarController/YPTabBarController.h>

@interface DetailMainViewController : YPTabBarController
/**
 运单id
 */
@property (nonatomic, copy) NSString * cargo_id;

@property (nonatomic, copy) NSString * detail_id;

@property (nonatomic, copy) NSString * weight_num;
@end
