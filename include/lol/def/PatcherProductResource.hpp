#pragma once
#include "../base_def.hpp" 
#include "PatcherComponentResource.hpp"
namespace lol {
  struct PatcherProductResource { 
    std::optional<uint32_t> refresh_period;
    std::string id;
    std::vector<PatcherComponentResource> components; 
  };
  inline void to_json(json& j, const PatcherProductResource& v) {
    if(v.refresh_period)
      j["refresh_period"] = *v.refresh_period;
    j["id"] = v.id; 
    j["components"] = v.components; 
  }
  inline void from_json(const json& j, PatcherProductResource& v) {
    if(auto it = j.find("refresh_period"); it != j.end() && !it->is_null())
      v.refresh_period = it->get<std::optional<uint32_t>>(); 
    v.id = j.at("id").get<std::string>(); 
    v.components = j.at("components").get<std::vector<PatcherComponentResource>>(); 
  }
}