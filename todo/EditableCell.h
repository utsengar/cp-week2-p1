//
//  CustomCell.h
//  todo
//
//  Created by Utkarsh Sengar on 1/23/14.
//  Copyright (c) 2014 area42. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SwipeableTextView.h"

@interface EditableCell : UITableViewCell

@property (nonatomic, weak) IBOutlet SwipeableTextView *taskText;

@end
