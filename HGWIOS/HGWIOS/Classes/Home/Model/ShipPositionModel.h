//
//  ShipPositionModel.h
//  HGWIOS
//
//  Created by mac on 2018/6/5.
//  Copyright © 2018年 Developer. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ShipPositionModel : NSObject

@property (nonatomic,nonatomic)NSString *course;
@property (nonatomic,nonatomic)NSString *speed;
@property (nonatomic,nonatomic)NSString *postime;
@property (nonatomic,nonatomic)NSString *longitude;
@property (nonatomic,nonatomic)NSString *latitude;
@property (nonatomic,nonatomic)NSString *mmsi;
@property (nonatomic,nonatomic)NSString *heading;
@property (nonatomic,nonatomic)NSString *navStatus;
@property (nonatomic,nonatomic)NSString *img_url;


@end
