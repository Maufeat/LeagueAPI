#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/RecofrienderActionResource.hpp>

namespace leagueapi {
  struct RecofrienderAccountResource { /**/ 
    std::vector<RecofrienderActionResource> contacts;/**/
    uint64_t accountId;/**/
    std::string platformId;/**/
  };
  static void to_json(json& j, const RecofrienderAccountResource& v) { 
    j["contacts"] = v.contacts;
    j["accountId"] = v.accountId;
    j["platformId"] = v.platformId;
  }
  static void from_json(const json& j, RecofrienderAccountResource& v) { 
    v.contacts = j.at("contacts").get<std::vector<RecofrienderActionResource>>(); 
    v.accountId = j.at("accountId").get<uint64_t>(); 
    v.platformId = j.at("platformId").get<std::string>(); 
  }
} 