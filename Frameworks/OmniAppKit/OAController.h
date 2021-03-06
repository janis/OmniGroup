// Copyright 2004-2008 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <OmniFoundation/OFController.h>

@class OAAboutPanelController;

#import <AppKit/NSNibDeclarations.h> // For IBAction and IBOutlet

@interface OAController : OFController
{
@private
    OAAboutPanelController *aboutPanelController;
}

- (OAAboutPanelController *)aboutPanelController;

- (IBAction)showAboutPanel:(id)sender;
- (IBAction)hideAboutPanel:(id)sender;
- (IBAction)sendFeedback:(id)sender;

- (void)getFeedbackAddress:(NSString **)feedbackAddress andSubject:(NSString **)subjectLine;
- (void)sendFeedbackEmailTo:(NSString *)feedbackAddress subject:(NSString *)subjectLine body:(NSString *)body;
- (void)sendFeedbackEmailWithBody:(NSString *)body;

@end
