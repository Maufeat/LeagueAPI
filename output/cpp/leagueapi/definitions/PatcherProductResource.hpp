#pragma once
#include <leagueapi/base.hpp>
#include <leagueapi/definitions/PatcherComponentResource.hpp>

namespace leagueapi {
  struct PatcherProductResource { /**/ 
    std::vector<PatcherComponentResource> components;/**/
    std::string id;/**/
    std::optional<uint32_t> refresh_period;/**/
  };
  static void to_json(json& j, const PatcherProductResource& v) { 
    j["components"] = v.components;
    j["id"] = v.id;
    j["refresh_period"] = v.refresh_period;
  }
  static void from_json(const json& j, PatcherProductResource& v) { 
    v.components = j.at("components").get<std::vector<PatcherComponentResource>>(); 
    v.id = j.at("id").get<std::string>(); 
    v.refresh_period = j.at("refresh_period").get<std::optional<uint32_t>>(); 
  }
} 