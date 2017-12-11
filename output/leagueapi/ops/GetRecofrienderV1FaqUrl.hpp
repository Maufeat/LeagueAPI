#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RecofrienderUrlResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RecofrienderUrlResource> GetRecofrienderV1FaqUrl (const https::Info& _info_ )
  { 
    return { https::Do(_info_, "get", "/recofriender/v1/faq-url?", { 
    }, { 
    },"") };
  }
} 