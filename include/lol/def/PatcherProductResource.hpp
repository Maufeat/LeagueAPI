#pragma once
#include "../base_def.hpp" 
#include "PatcherComponentResource.hpp"
namespace lol {
  struct PatcherProductResource { 
    std::string id;
    std::optional<uint32_t> refresh_period;
    std::vector<PatcherComponentResource> components; 
  };
  inline void to_json(json& j, const PatcherProductResource& v) {
    j["id"] = v.id; 
    if(v.refresh_period)
      j["refresh_period"] = *v.refresh_period;
    j["components"] = v.components; 
  }
  inline void from_json(const json& j, PatcherProductResource& v) {
    v.id = j.at("id").get<std::string>(); 
    if(auto it = j.find("refresh_period"); it != j.end() && !it->is_null())
      v.refresh_period = it->get<std::optional<uint32_t>>(); 
    v.components = j.at("components").get<std::vector<PatcherComponentResource>>(); 
  }
}