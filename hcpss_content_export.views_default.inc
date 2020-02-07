<?php
/**
 * @file
 * hcpss_content_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function hcpss_content_export_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'content_export';
  $view->description = 'Made by Brendan for content migration.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Content Export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Content Export';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'created' => 'created',
    'field_event_date' => 'field_event_date',
    'field_news_message_content' => 'field_news_message_content',
    'field_news_message_summary' => 'field_news_message_summary',
    'body' => 'body',
    'field_gallery_description' => 'field_gallery_description',
    'field_gallery_key_image' => 'field_gallery_key_image',
    'field_gallery_image' => 'field_gallery_image',
    'field_staff_biography' => 'field_staff_biography',
    'field_staff_email' => 'field_staff_email',
    'field_staff_job_title' => 'field_staff_job_title',
    'field_staff_telephone' => 'field_staff_telephone',
    'field_staff_website' => 'field_staff_website',
    'field_staff_photo' => 'field_staff_photo',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_date' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_news_message_content' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_news_message_summary' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_gallery_description' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_gallery_key_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_gallery_image' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_staff_biography' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_staff_email' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_staff_job_title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_staff_telephone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_staff_website' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
    'field_staff_photo' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 1,
    ),
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_class'] = 'export-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['element_class'] = 'export-created';
  $handler->display->display_options['fields']['created']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['created']['date_format'] = 'rfc_822';
  $handler->display->display_options['fields']['created']['second_date_format'] = 'simple';
  /* Field: Content: Date */
  $handler->display->display_options['fields']['field_event_date']['id'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['table'] = 'field_data_field_event_date';
  $handler->display->display_options['fields']['field_event_date']['field'] = 'field_event_date';
  $handler->display->display_options['fields']['field_event_date']['element_class'] = 'export-event-date';
  $handler->display->display_options['fields']['field_event_date']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_event_date']['settings'] = array(
    'format_type' => 'rfc_822',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: News Message Content */
  $handler->display->display_options['fields']['field_news_message_content']['id'] = 'field_news_message_content';
  $handler->display->display_options['fields']['field_news_message_content']['table'] = 'field_data_field_news_message_content';
  $handler->display->display_options['fields']['field_news_message_content']['field'] = 'field_news_message_content';
  $handler->display->display_options['fields']['field_news_message_content']['label'] = 'Content';
  $handler->display->display_options['fields']['field_news_message_content']['element_class'] = 'export-message-content';
  $handler->display->display_options['fields']['field_news_message_content']['element_default_classes'] = FALSE;
  /* Field: Content: News Message Summary */
  $handler->display->display_options['fields']['field_news_message_summary']['id'] = 'field_news_message_summary';
  $handler->display->display_options['fields']['field_news_message_summary']['table'] = 'field_data_field_news_message_summary';
  $handler->display->display_options['fields']['field_news_message_summary']['field'] = 'field_news_message_summary';
  $handler->display->display_options['fields']['field_news_message_summary']['label'] = 'Summary';
  $handler->display->display_options['fields']['field_news_message_summary']['element_class'] = 'export-message-summary';
  $handler->display->display_options['fields']['field_news_message_summary']['element_default_classes'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['element_class'] = 'export-description';
  $handler->display->display_options['fields']['body']['element_default_classes'] = FALSE;
  /* Field: Content: Gallery Description */
  $handler->display->display_options['fields']['field_gallery_description']['id'] = 'field_gallery_description';
  $handler->display->display_options['fields']['field_gallery_description']['table'] = 'field_data_field_gallery_description';
  $handler->display->display_options['fields']['field_gallery_description']['field'] = 'field_gallery_description';
  $handler->display->display_options['fields']['field_gallery_description']['label'] = 'Description';
  $handler->display->display_options['fields']['field_gallery_description']['element_class'] = 'export-description';
  $handler->display->display_options['fields']['field_gallery_description']['element_default_classes'] = FALSE;
  /* Field: Content: Gallery Key Image */
  $handler->display->display_options['fields']['field_gallery_key_image']['id'] = 'field_gallery_key_image';
  $handler->display->display_options['fields']['field_gallery_key_image']['table'] = 'field_data_field_gallery_key_image';
  $handler->display->display_options['fields']['field_gallery_key_image']['field'] = 'field_gallery_key_image';
  $handler->display->display_options['fields']['field_gallery_key_image']['label'] = 'Key';
  $handler->display->display_options['fields']['field_gallery_key_image']['element_class'] = 'export-key-image';
  $handler->display->display_options['fields']['field_gallery_key_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_key_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_key_image']['type'] = 'file_url_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_gallery_image']['id'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['table'] = 'field_data_field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['field'] = 'field_gallery_image';
  $handler->display->display_options['fields']['field_gallery_image']['label'] = 'Images';
  $handler->display->display_options['fields']['field_gallery_image']['element_class'] = 'export-images';
  $handler->display->display_options['fields']['field_gallery_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_gallery_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_gallery_image']['type'] = 'file_url_plain';
  $handler->display->display_options['fields']['field_gallery_image']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_gallery_image']['separator'] = ' | ';
  /* Field: Content: Biography */
  $handler->display->display_options['fields']['field_staff_biography']['id'] = 'field_staff_biography';
  $handler->display->display_options['fields']['field_staff_biography']['table'] = 'field_data_field_staff_biography';
  $handler->display->display_options['fields']['field_staff_biography']['field'] = 'field_staff_biography';
  $handler->display->display_options['fields']['field_staff_biography']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_staff_biography']['element_class'] = 'export-biography';
  $handler->display->display_options['fields']['field_staff_biography']['element_default_classes'] = FALSE;
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_staff_email']['id'] = 'field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['table'] = 'field_data_field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['field'] = 'field_staff_email';
  $handler->display->display_options['fields']['field_staff_email']['element_class'] = 'export-email';
  $handler->display->display_options['fields']['field_staff_email']['element_default_classes'] = FALSE;
  /* Field: Content: Job Title */
  $handler->display->display_options['fields']['field_staff_job_title']['id'] = 'field_staff_job_title';
  $handler->display->display_options['fields']['field_staff_job_title']['table'] = 'field_data_field_staff_job_title';
  $handler->display->display_options['fields']['field_staff_job_title']['field'] = 'field_staff_job_title';
  $handler->display->display_options['fields']['field_staff_job_title']['element_class'] = 'export-job-title';
  $handler->display->display_options['fields']['field_staff_job_title']['element_default_classes'] = FALSE;
  /* Field: Content: Telephone */
  $handler->display->display_options['fields']['field_staff_telephone']['id'] = 'field_staff_telephone';
  $handler->display->display_options['fields']['field_staff_telephone']['table'] = 'field_data_field_staff_telephone';
  $handler->display->display_options['fields']['field_staff_telephone']['field'] = 'field_staff_telephone';
  $handler->display->display_options['fields']['field_staff_telephone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_staff_telephone']['element_class'] = 'export-telephone';
  $handler->display->display_options['fields']['field_staff_telephone']['element_default_classes'] = FALSE;
  /* Field: Content: Website */
  $handler->display->display_options['fields']['field_staff_website']['id'] = 'field_staff_website';
  $handler->display->display_options['fields']['field_staff_website']['table'] = 'field_data_field_staff_website';
  $handler->display->display_options['fields']['field_staff_website']['field'] = 'field_staff_website';
  $handler->display->display_options['fields']['field_staff_website']['element_type'] = '0';
  $handler->display->display_options['fields']['field_staff_website']['element_class'] = 'export-website';
  $handler->display->display_options['fields']['field_staff_website']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_staff_website']['click_sort_column'] = 'url';
  /* Field: Content: Photo */
  $handler->display->display_options['fields']['field_staff_photo']['id'] = 'field_staff_photo';
  $handler->display->display_options['fields']['field_staff_photo']['table'] = 'field_data_field_staff_photo';
  $handler->display->display_options['fields']['field_staff_photo']['field'] = 'field_staff_photo';
  $handler->display->display_options['fields']['field_staff_photo']['element_class'] = 'export-photo';
  $handler->display->display_options['fields']['field_staff_photo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_staff_photo']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_staff_photo']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_staff_photo']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Type */
  $handler->display->display_options['arguments']['type']['id'] = 'type';
  $handler->display->display_options['arguments']['type']['table'] = 'node';
  $handler->display->display_options['arguments']['type']['field'] = 'type';
  $handler->display->display_options['arguments']['type']['default_action'] = 'default';
  $handler->display->display_options['arguments']['type']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['type']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['type']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['type']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['type']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>=';
  $handler->display->display_options['filters']['created']['value']['value'] = '-1 year';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'content-export/%';
  $export['content_export'] = $view;

  return $export;
}
