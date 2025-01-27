/*
 *  This file is part of the WebKit open source project.
 *  This file has been generated by generate-bindings.pl. DO NOT MODIFY!
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public License
 *  along with this library; see the file COPYING.LIB.  If not, write to
 *  the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301, USA.
 */

#ifndef WebKitDOMTextTrack_h
#define WebKitDOMTextTrack_h

#ifdef WEBKIT_DOM_USE_UNSTABLE_API

#include <glib-object.h>
#include <webkitdom/WebKitDOMObject.h>
#include <webkitdom/webkitdomdefines-unstable.h>

G_BEGIN_DECLS

#define WEBKIT_DOM_TYPE_TEXT_TRACK            (webkit_dom_text_track_get_type())
#define WEBKIT_DOM_TEXT_TRACK(obj)            (G_TYPE_CHECK_INSTANCE_CAST((obj), WEBKIT_DOM_TYPE_TEXT_TRACK, WebKitDOMTextTrack))
#define WEBKIT_DOM_TEXT_TRACK_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST((klass),  WEBKIT_DOM_TYPE_TEXT_TRACK, WebKitDOMTextTrackClass)
#define WEBKIT_DOM_IS_TEXT_TRACK(obj)         (G_TYPE_CHECK_INSTANCE_TYPE((obj), WEBKIT_DOM_TYPE_TEXT_TRACK))
#define WEBKIT_DOM_IS_TEXT_TRACK_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE((klass),  WEBKIT_DOM_TYPE_TEXT_TRACK))
#define WEBKIT_DOM_TEXT_TRACK_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS((obj),  WEBKIT_DOM_TYPE_TEXT_TRACK, WebKitDOMTextTrackClass))

struct _WebKitDOMTextTrack {
    WebKitDOMObject parent_instance;
};

struct _WebKitDOMTextTrackClass {
    WebKitDOMObjectClass parent_class;
};

WEBKIT_API GType
webkit_dom_text_track_get_type(void);

/**
 * webkit_dom_text_track_add_cue:
 * @self: A #WebKitDOMTextTrack
 * @cue: A #WebKitDOMTextTrackCue
 * @error: #GError
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_text_track_add_cue(WebKitDOMTextTrack* self, WebKitDOMTextTrackCue* cue, GError** error);

/**
 * webkit_dom_text_track_remove_cue:
 * @self: A #WebKitDOMTextTrack
 * @cue: A #WebKitDOMTextTrackCue
 * @error: #GError
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_text_track_remove_cue(WebKitDOMTextTrack* self, WebKitDOMTextTrackCue* cue, GError** error);

/**
 * webkit_dom_text_track_get_id:
 * @self: A #WebKitDOMTextTrack
 *
 * Returns: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API gchar*
webkit_dom_text_track_get_id(WebKitDOMTextTrack* self);

/**
 * webkit_dom_text_track_get_label:
 * @self: A #WebKitDOMTextTrack
 *
 * Returns: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API gchar*
webkit_dom_text_track_get_label(WebKitDOMTextTrack* self);

/**
 * webkit_dom_text_track_get_language:
 * @self: A #WebKitDOMTextTrack
 *
 * Returns: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API gchar*
webkit_dom_text_track_get_language(WebKitDOMTextTrack* self);

/**
 * webkit_dom_text_track_get_in_band_metadata_track_dispatch_type:
 * @self: A #WebKitDOMTextTrack
 *
 * Returns: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API gchar*
webkit_dom_text_track_get_in_band_metadata_track_dispatch_type(WebKitDOMTextTrack* self);

/**
 * webkit_dom_text_track_get_cues:
 * @self: A #WebKitDOMTextTrack
 *
 * Returns: (transfer full): A #WebKitDOMTextTrackCueList
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMTextTrackCueList*
webkit_dom_text_track_get_cues(WebKitDOMTextTrack* self);

/**
 * webkit_dom_text_track_get_active_cues:
 * @self: A #WebKitDOMTextTrack
 *
 * Returns: (transfer full): A #WebKitDOMTextTrackCueList
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMTextTrackCueList*
webkit_dom_text_track_get_active_cues(WebKitDOMTextTrack* self);

G_END_DECLS

#endif /* WEBKIT_DOM_USE_UNSTABLE_API */
#endif /* WebKitDOMTextTrack_h */
