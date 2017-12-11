#pragma once
#include <leagueapi/https.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<void> DeleteRecofrienderV2Contacts (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "delete", "/recofriender/v2/contacts?", { 
    }, { 
    }) };
  }
} 