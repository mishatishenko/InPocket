//
//  PWRestaurantPurchasesController.h
//  PocketWaiter
//
//  Created by Www Www on 8/24/16.
//  Copyright © 2016 inPocket. All rights reserved.
//

#import "PWScrollableViewController.h"

@class PWRestaurant;
@class PWUser;

@interface PWRestaurantPurchasesController : PWScrollableViewController

- (instancetype)initWithUser:(PWUser *)user estimatedHeightHandler:(void (^)(CGFloat))handler;

- (void)updateWithRestaurant:(PWRestaurant *)restaurant;

@end
