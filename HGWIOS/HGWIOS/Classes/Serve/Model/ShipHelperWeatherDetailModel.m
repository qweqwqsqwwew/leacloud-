//
//  ShipHelperWeatherDetailModel.m
//  HGWIOS
//
//  Created by mac on 2018/6/4.
//  Copyright © 2018年 Developer. All rights reserved.
//

#import "ShipHelperWeatherDetailModel.h"

@implementation ShipHelperWeatherDetailModel

+(NSDictionary *)mj_replacedKeyFromPropertyName
{
    return @{
             @"weatherID" : @"id"
             };
}

@end
