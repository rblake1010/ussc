<?php
/*
 * $RCSfile: bootstrap.inc,v $
 *
 * Gallery - a web based photo album viewer and editor
 * Copyright (C) 2000-2005 Bharat Mediratta
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

/* Bootstrap code that we're going to need no matter what we do */
require_once(dirname(__FILE__) . '/modules/core/classes/Gallery.class');
require_once(dirname(__FILE__) . '/modules/core/classes/GalleryDataCache.class');
require_once(dirname(__FILE__) . '/modules/core/classes/GalleryUtilities.class');

/*
 * Set up our Gallery global.  It's important to use a reference here because
 * the constructor registers a shutdown function and ties it to the instance in
 * the constructor.  This global should be the only one that Gallery requires.
 * Everything else should be inside it so that we do not pollute the namespace
 * (especially important when we're embedded inside another application).
 */
$GLOBALS['gallery'] =& new Gallery();
$gallery =& $GLOBALS['gallery'];

if (!defined('GALLERY_CONFIG_DIR')) {
    define('GALLERY_CONFIG_DIR', dirname(__FILE__));
}
@include(GALLERY_CONFIG_DIR . '/config.php');
?>
