#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RecofrienderContactPaginationResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RecofrienderContactPaginationResource> GetRecofrienderV2ContactsPage (const https::Info& _info_,
      const uint64_t& start /**/,
      const uint64_t& limit /**/ )
  { 
    return { https::Do(_info_, "get", "/recofriender/v2/contacts/page?", { 
      { "start", https::to_string(start) },
      { "limit", https::to_string(limit) },
    }, { 
    },"") };
  }
} 