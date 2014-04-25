//
//  TBFacetTableViewCell.h
//  TBFacetTableView
//
//  Created by Julian Krumow on 16.04.14.
//  Copyright (c) 2014 Julian Krumow. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 *  This class represents a UITablbeViewCell shaped like facets.
 */
@interface TBFacetTableViewCell : UITableViewCell

@property (strong, nonatomic) UIColor *facetColor;
@property (strong, nonatomic) UIColor *facetColorTop;
@property (strong, nonatomic) UIColor *facetColorBottom;
@property (nonatomic, assign) BOOL isHighlighted;
@property (assign, nonatomic) CGPathRef pathTop;
@property (assign, nonatomic) CGPathRef pathBottom;

/**
 *  The cells reuse identifier.
 *
 *  @return The cell's reuse identifier as a string.
 */
+ (NSString *)reuseIdentifier;


/**
 *  Sets the highlight state of the top section.
 *
 *  @param highlighted Set to `YES` to highlight the cell
 *  @param animated    Set to `YES` to animate the change of the highlighting state
 */
- (void)setHighlightedTop:(BOOL)highlighted animated:(BOOL)animated;

/**
 *  Sets the highlight state of the bottom section.
 *
 *  @param highlighted Set to `YES` to highlight the cell
 *  @param animated    Set to `YES` to animate the change of the highlighting state
 */
- (void)setHighlightedBottom:(BOOL)highlighted animated:(BOOL)animated;

@end
