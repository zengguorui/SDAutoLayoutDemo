//
//  TableViewCell.h
//  FDTemplateLayoutCellDemo
//
//  Created by 曾国锐 on 2017/1/6.
//  Copyright © 2017年 曾国锐. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FDFeedEntity.h"
#import "UIView+SDAutoLayout.h"

@interface TableViewCell : UITableViewCell

@property (nonatomic, weak) IBOutlet UILabel *titleLabel;
@property (nonatomic, weak) IBOutlet UILabel *contentLabel;
@property (nonatomic, weak) IBOutlet UIImageView *contentImageView;
@property (nonatomic, weak) IBOutlet UILabel *usernameLabel;
@property (nonatomic, weak) IBOutlet UILabel *timeLabel;

@property (nonatomic, strong) FDFeedEntity *entity;

@end
