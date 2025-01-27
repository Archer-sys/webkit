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

#ifndef WebKitDOMHTMLMediaElement_h
#define WebKitDOMHTMLMediaElement_h

#ifdef WEBKIT_DOM_USE_UNSTABLE_API

#include <glib-object.h>
#include <webkitdom/WebKitDOMHTMLElement.h>
#include <webkitdom/webkitdomdefines-unstable.h>

G_BEGIN_DECLS

#define WEBKIT_DOM_TYPE_HTML_MEDIA_ELEMENT            (webkit_dom_html_media_element_get_type())
#define WEBKIT_DOM_HTML_MEDIA_ELEMENT(obj)            (G_TYPE_CHECK_INSTANCE_CAST((obj), WEBKIT_DOM_TYPE_HTML_MEDIA_ELEMENT, WebKitDOMHTMLMediaElement))
#define WEBKIT_DOM_HTML_MEDIA_ELEMENT_CLASS(klass)    (G_TYPE_CHECK_CLASS_CAST((klass),  WEBKIT_DOM_TYPE_HTML_MEDIA_ELEMENT, WebKitDOMHTMLMediaElementClass)
#define WEBKIT_DOM_IS_HTML_MEDIA_ELEMENT(obj)         (G_TYPE_CHECK_INSTANCE_TYPE((obj), WEBKIT_DOM_TYPE_HTML_MEDIA_ELEMENT))
#define WEBKIT_DOM_IS_HTML_MEDIA_ELEMENT_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE((klass),  WEBKIT_DOM_TYPE_HTML_MEDIA_ELEMENT))
#define WEBKIT_DOM_HTML_MEDIA_ELEMENT_GET_CLASS(obj)  (G_TYPE_INSTANCE_GET_CLASS((obj),  WEBKIT_DOM_TYPE_HTML_MEDIA_ELEMENT, WebKitDOMHTMLMediaElementClass))

/**
 * WEBKIT_DOM_HTML_MEDIA_ELEMENT_NETWORK_EMPTY:
 */
#define WEBKIT_DOM_HTML_MEDIA_ELEMENT_NETWORK_EMPTY 0

/**
 * WEBKIT_DOM_HTML_MEDIA_ELEMENT_NETWORK_IDLE:
 */
#define WEBKIT_DOM_HTML_MEDIA_ELEMENT_NETWORK_IDLE 1

/**
 * WEBKIT_DOM_HTML_MEDIA_ELEMENT_NETWORK_LOADING:
 */
#define WEBKIT_DOM_HTML_MEDIA_ELEMENT_NETWORK_LOADING 2

/**
 * WEBKIT_DOM_HTML_MEDIA_ELEMENT_NETWORK_NO_SOURCE:
 */
#define WEBKIT_DOM_HTML_MEDIA_ELEMENT_NETWORK_NO_SOURCE 3

/**
 * WEBKIT_DOM_HTML_MEDIA_ELEMENT_HAVE_NOTHING:
 */
#define WEBKIT_DOM_HTML_MEDIA_ELEMENT_HAVE_NOTHING 0

/**
 * WEBKIT_DOM_HTML_MEDIA_ELEMENT_HAVE_METADATA:
 */
#define WEBKIT_DOM_HTML_MEDIA_ELEMENT_HAVE_METADATA 1

/**
 * WEBKIT_DOM_HTML_MEDIA_ELEMENT_HAVE_CURRENT_DATA:
 */
#define WEBKIT_DOM_HTML_MEDIA_ELEMENT_HAVE_CURRENT_DATA 2

/**
 * WEBKIT_DOM_HTML_MEDIA_ELEMENT_HAVE_FUTURE_DATA:
 */
#define WEBKIT_DOM_HTML_MEDIA_ELEMENT_HAVE_FUTURE_DATA 3

/**
 * WEBKIT_DOM_HTML_MEDIA_ELEMENT_HAVE_ENOUGH_DATA:
 */
#define WEBKIT_DOM_HTML_MEDIA_ELEMENT_HAVE_ENOUGH_DATA 4

struct _WebKitDOMHTMLMediaElement {
    WebKitDOMHTMLElement parent_instance;
};

struct _WebKitDOMHTMLMediaElementClass {
    WebKitDOMHTMLElementClass parent_class;
};

WEBKIT_API GType
webkit_dom_html_media_element_get_type(void);

/**
 * webkit_dom_html_media_element_load:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_media_element_load(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_can_play_type:
 * @self: A #WebKitDOMHTMLMediaElement
 * @type: A #gchar
 *
 * Returns: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API gchar*
webkit_dom_html_media_element_can_play_type(WebKitDOMHTMLMediaElement* self, const gchar* type);

/**
 * webkit_dom_html_media_element_pause:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_media_element_pause(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_fast_seek:
 * @self: A #WebKitDOMHTMLMediaElement
 * @time: A #gdouble
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_media_element_fast_seek(WebKitDOMHTMLMediaElement* self, gdouble time);

/**
 * webkit_dom_html_media_element_webkit_show_playback_target_picker:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_media_element_webkit_show_playback_target_picker(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_get_error:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: (transfer full): A #WebKitDOMMediaError
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMMediaError*
webkit_dom_html_media_element_get_error(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_get_src:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API gchar*
webkit_dom_html_media_element_get_src(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_set_src:
 * @self: A #WebKitDOMHTMLMediaElement
 * @value: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_media_element_set_src(WebKitDOMHTMLMediaElement* self, const gchar* value);

/**
 * webkit_dom_html_media_element_get_current_src:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API gchar*
webkit_dom_html_media_element_get_current_src(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_get_cross_origin:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API gchar*
webkit_dom_html_media_element_get_cross_origin(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_set_cross_origin:
 * @self: A #WebKitDOMHTMLMediaElement
 * @value: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_media_element_set_cross_origin(WebKitDOMHTMLMediaElement* self, const gchar* value);

/**
 * webkit_dom_html_media_element_get_network_state:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gushort
 *
 * Stability: Unstable
**/
WEBKIT_API gushort
webkit_dom_html_media_element_get_network_state(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_get_preload:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API gchar*
webkit_dom_html_media_element_get_preload(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_set_preload:
 * @self: A #WebKitDOMHTMLMediaElement
 * @value: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_media_element_set_preload(WebKitDOMHTMLMediaElement* self, const gchar* value);

/**
 * webkit_dom_html_media_element_get_buffered:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: (transfer full): A #WebKitDOMTimeRanges
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMTimeRanges*
webkit_dom_html_media_element_get_buffered(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_get_ready_state:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gushort
 *
 * Stability: Unstable
**/
WEBKIT_API gushort
webkit_dom_html_media_element_get_ready_state(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_get_seeking:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API gboolean
webkit_dom_html_media_element_get_seeking(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_get_current_time:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gdouble
 *
 * Stability: Unstable
**/
WEBKIT_API gdouble
webkit_dom_html_media_element_get_current_time(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_set_current_time:
 * @self: A #WebKitDOMHTMLMediaElement
 * @value: A #gdouble
 * @error: #GError
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_media_element_set_current_time(WebKitDOMHTMLMediaElement* self, gdouble value, GError** error);

/**
 * webkit_dom_html_media_element_get_duration:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gdouble
 *
 * Stability: Unstable
**/
WEBKIT_API gdouble
webkit_dom_html_media_element_get_duration(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_get_paused:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API gboolean
webkit_dom_html_media_element_get_paused(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_get_default_playback_rate:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gdouble
 *
 * Stability: Unstable
**/
WEBKIT_API gdouble
webkit_dom_html_media_element_get_default_playback_rate(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_set_default_playback_rate:
 * @self: A #WebKitDOMHTMLMediaElement
 * @value: A #gdouble
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_media_element_set_default_playback_rate(WebKitDOMHTMLMediaElement* self, gdouble value);

/**
 * webkit_dom_html_media_element_get_playback_rate:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gdouble
 *
 * Stability: Unstable
**/
WEBKIT_API gdouble
webkit_dom_html_media_element_get_playback_rate(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_set_playback_rate:
 * @self: A #WebKitDOMHTMLMediaElement
 * @value: A #gdouble
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_media_element_set_playback_rate(WebKitDOMHTMLMediaElement* self, gdouble value);

/**
 * webkit_dom_html_media_element_get_played:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: (transfer full): A #WebKitDOMTimeRanges
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMTimeRanges*
webkit_dom_html_media_element_get_played(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_get_seekable:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: (transfer full): A #WebKitDOMTimeRanges
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMTimeRanges*
webkit_dom_html_media_element_get_seekable(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_get_ended:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API gboolean
webkit_dom_html_media_element_get_ended(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_get_autoplay:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API gboolean
webkit_dom_html_media_element_get_autoplay(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_set_autoplay:
 * @self: A #WebKitDOMHTMLMediaElement
 * @value: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_media_element_set_autoplay(WebKitDOMHTMLMediaElement* self, gboolean value);

/**
 * webkit_dom_html_media_element_get_loop:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API gboolean
webkit_dom_html_media_element_get_loop(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_set_loop:
 * @self: A #WebKitDOMHTMLMediaElement
 * @value: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_media_element_set_loop(WebKitDOMHTMLMediaElement* self, gboolean value);

/**
 * webkit_dom_html_media_element_get_controls:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API gboolean
webkit_dom_html_media_element_get_controls(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_set_controls:
 * @self: A #WebKitDOMHTMLMediaElement
 * @value: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_media_element_set_controls(WebKitDOMHTMLMediaElement* self, gboolean value);

/**
 * webkit_dom_html_media_element_get_volume:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gdouble
 *
 * Stability: Unstable
**/
WEBKIT_API gdouble
webkit_dom_html_media_element_get_volume(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_set_volume:
 * @self: A #WebKitDOMHTMLMediaElement
 * @value: A #gdouble
 * @error: #GError
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_media_element_set_volume(WebKitDOMHTMLMediaElement* self, gdouble value, GError** error);

/**
 * webkit_dom_html_media_element_get_muted:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API gboolean
webkit_dom_html_media_element_get_muted(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_set_muted:
 * @self: A #WebKitDOMHTMLMediaElement
 * @value: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_media_element_set_muted(WebKitDOMHTMLMediaElement* self, gboolean value);

/**
 * webkit_dom_html_media_element_get_default_muted:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API gboolean
webkit_dom_html_media_element_get_default_muted(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_set_default_muted:
 * @self: A #WebKitDOMHTMLMediaElement
 * @value: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_media_element_set_default_muted(WebKitDOMHTMLMediaElement* self, gboolean value);

/**
 * webkit_dom_html_media_element_get_webkit_preserves_pitch:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API gboolean
webkit_dom_html_media_element_get_webkit_preserves_pitch(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_set_webkit_preserves_pitch:
 * @self: A #WebKitDOMHTMLMediaElement
 * @value: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_media_element_set_webkit_preserves_pitch(WebKitDOMHTMLMediaElement* self, gboolean value);

/**
 * webkit_dom_html_media_element_get_webkit_has_closed_captions:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API gboolean
webkit_dom_html_media_element_get_webkit_has_closed_captions(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_get_webkit_closed_captions_visible:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API gboolean
webkit_dom_html_media_element_get_webkit_closed_captions_visible(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_set_webkit_closed_captions_visible:
 * @self: A #WebKitDOMHTMLMediaElement
 * @value: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_media_element_set_webkit_closed_captions_visible(WebKitDOMHTMLMediaElement* self, gboolean value);

/**
 * webkit_dom_html_media_element_get_webkit_audio_decoded_byte_count:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gulong
 *
 * Stability: Unstable
**/
WEBKIT_API gulong
webkit_dom_html_media_element_get_webkit_audio_decoded_byte_count(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_get_webkit_video_decoded_byte_count:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gulong
 *
 * Stability: Unstable
**/
WEBKIT_API gulong
webkit_dom_html_media_element_get_webkit_video_decoded_byte_count(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_get_media_group:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API gchar*
webkit_dom_html_media_element_get_media_group(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_set_media_group:
 * @self: A #WebKitDOMHTMLMediaElement
 * @value: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_media_element_set_media_group(WebKitDOMHTMLMediaElement* self, const gchar* value);

/**
 * webkit_dom_html_media_element_get_controller:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: (transfer full): A #WebKitDOMMediaController
 *
 * Stability: Unstable
**/
WEBKIT_API WebKitDOMMediaController*
webkit_dom_html_media_element_get_controller(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_get_webkit_current_playback_target_is_wireless:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API gboolean
webkit_dom_html_media_element_get_webkit_current_playback_target_is_wireless(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_get_kind:
 * @self: A #WebKitDOMHTMLMediaElement
 *
 * Returns: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API gchar*
webkit_dom_html_media_element_get_kind(WebKitDOMHTMLMediaElement* self);

/**
 * webkit_dom_html_media_element_set_kind:
 * @self: A #WebKitDOMHTMLMediaElement
 * @value: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_media_element_set_kind(WebKitDOMHTMLMediaElement* self, const gchar* value);

G_END_DECLS

#endif /* WEBKIT_DOM_USE_UNSTABLE_API */
#endif /* WebKitDOMHTMLMediaElement_h */
