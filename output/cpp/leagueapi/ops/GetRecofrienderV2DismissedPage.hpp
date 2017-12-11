#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RecofrienderContactPaginationResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RecofrienderContactPaginationResource> GetRecofrienderV2DismissedPage (const https::Info& _info_,
      const uint64_t& start /**/,
      const uint64_t& limit /**/ )
  { 
    return { https::Do(_info_, "get", "/recofriender/v2/dismissed/page?", { 
      { "start", to_string(start) },
      { "limit", to_string(limit) },
    }, { 
    }) };
  }
} 