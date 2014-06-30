<?php
/**
 * @file
 * pn_contexts.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function pn_contexts_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = '';
  $context->tag = 'phreaknic';
  $context->conditions = array();
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-cod_news-single_item_block' => array(
          'module' => 'views',
          'delta' => 'cod_news-single_item_block',
          'region' => 'highlighted',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('phreaknic');
  $export['homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = 'Sitewide contetxt';
  $context->tag = 'phreaknic';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
        ),
        'user-login' => array(
          'module' => 'user',
          'delta' => 'login',
          'region' => 'sidebar_second',
          'weight' => '-9',
        ),
        'views-cod_news-multi_news_block' => array(
          'module' => 'views',
          'delta' => 'cod_news-multi_news_block',
          'region' => 'sidebar_second',
          'weight' => '-8',
        ),
        'views-ticket_user-block' => array(
          'module' => 'views',
          'delta' => 'ticket_user-block',
          'region' => 'sidebar_second',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Sitewide contetxt');
  t('phreaknic');
  $export['sitewide'] = $context;

  return $export;
}
