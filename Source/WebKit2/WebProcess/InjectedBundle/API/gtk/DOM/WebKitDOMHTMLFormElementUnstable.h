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

#ifndef WebKitDOMHTMLFormElementUnstable_h
#define WebKitDOMHTMLFormElementUnstable_h

#ifdef WEBKIT_DOM_USE_UNSTABLE_API

#include <webkitdom/webkitdomdefines-unstable.h>

G_BEGIN_DECLS

/**
 * webkit_dom_html_form_element_check_validity:
 * @self: A #WebKitDOMHTMLFormElement
 *
 * Returns: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API gboolean
webkit_dom_html_form_element_check_validity(WebKitDOMHTMLFormElement* self);

/**
 * webkit_dom_html_form_element_request_autocomplete:
 * @self: A #WebKitDOMHTMLFormElement
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_form_element_request_autocomplete(WebKitDOMHTMLFormElement* self);

/**
 * webkit_dom_html_form_element_get_autocomplete:
 * @self: A #WebKitDOMHTMLFormElement
 *
 * Returns: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API gchar*
webkit_dom_html_form_element_get_autocomplete(WebKitDOMHTMLFormElement* self);

/**
 * webkit_dom_html_form_element_set_autocomplete:
 * @self: A #WebKitDOMHTMLFormElement
 * @value: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_form_element_set_autocomplete(WebKitDOMHTMLFormElement* self, const gchar* value);

/**
 * webkit_dom_html_form_element_get_no_validate:
 * @self: A #WebKitDOMHTMLFormElement
 *
 * Returns: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API gboolean
webkit_dom_html_form_element_get_no_validate(WebKitDOMHTMLFormElement* self);

/**
 * webkit_dom_html_form_element_set_no_validate:
 * @self: A #WebKitDOMHTMLFormElement
 * @value: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_form_element_set_no_validate(WebKitDOMHTMLFormElement* self, gboolean value);

/**
 * webkit_dom_html_form_element_get_autocorrect:
 * @self: A #WebKitDOMHTMLFormElement
 *
 * Returns: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API gboolean
webkit_dom_html_form_element_get_autocorrect(WebKitDOMHTMLFormElement* self);

/**
 * webkit_dom_html_form_element_set_autocorrect:
 * @self: A #WebKitDOMHTMLFormElement
 * @value: A #gboolean
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_form_element_set_autocorrect(WebKitDOMHTMLFormElement* self, gboolean value);

/**
 * webkit_dom_html_form_element_get_autocapitalize:
 * @self: A #WebKitDOMHTMLFormElement
 *
 * Returns: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API gchar*
webkit_dom_html_form_element_get_autocapitalize(WebKitDOMHTMLFormElement* self);

/**
 * webkit_dom_html_form_element_set_autocapitalize:
 * @self: A #WebKitDOMHTMLFormElement
 * @value: A #gchar
 *
 * Stability: Unstable
**/
WEBKIT_API void
webkit_dom_html_form_element_set_autocapitalize(WebKitDOMHTMLFormElement* self, const gchar* value);


G_END_DECLS

#endif /* WEBKIT_DOM_USE_UNSTABLE_API */
#endif /* WebKitDOMHTMLFormElementUnstable_h */
