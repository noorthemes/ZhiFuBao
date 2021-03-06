//
//  SDHomeGridViewListItemView.h
//  ZhiFuBao(GSD)
//
//  Created by iOS_Samboo on 16/1/29.
//  Copyright © 2016年 iOS. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SDHomeGridItemModel;

@interface SDHomeGridViewListItemView : UIView

@property (nonatomic, strong) SDHomeGridItemModel *itemModel;
@property (nonatomic, assign) BOOL hidenIcon;

@property (nonatomic, strong) UIImage *iconImage;

@property (nonatomic, copy) void (^itemLongPressedOperationBlock)(UILongPressGestureRecognizer *longPressed);
@property (nonatomic, copy) void (^buttonClickedOperationBlock)(SDHomeGridViewListItemView *item);
@property (nonatomic, copy) void (^iconViewClickedOperationBlock)(SDHomeGridViewListItemView *view);

@end
