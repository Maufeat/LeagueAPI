#pragma once
#include <leagueapi/https.hpp>
#include <leagueapi/definitions/RecofrienderUrlResource.hpp>

namespace leagueapi::op {
  /**/
  static https::Result<RecofrienderUrlResource> PostRecofrienderV1RegistrationsByNetwork (const https::Info& _info_,
      const std::string& network /**/ )
  { 
    return { https::Do(_info_, "post", "/recofriender/v1/registrations/"+to_string(network)+"?", { 
    }, { 
    }) };
  }
} 