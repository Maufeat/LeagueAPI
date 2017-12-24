#pragma once
#include "../base_def.hpp" 
#include "PatcherComponentResource.hpp"
namespace lol {
  struct PatcherProductResource { 
    std::string id;
    std::vector<PatcherComponentResource> components;
    std::optional<uint32_t> refresh_period; 
  };
  inline void to_json(json& j, const PatcherProductResource& v) {
    j["id"] = v.id; 
    j["components"] = v.components; 
    if(v.refresh_period)
      j["refresh_period"] = *v.refresh_period;
  }
  inline void from_json(const json& j, PatcherProductResource& v) {
    v.id = j.at("id").get<std::string>(); 
    v.components = j.at("components").get<std::vector<PatcherComponentResource>>(); 
    if(auto it = j.find("refresh_period"); it != j.end() && !it->is_null())
      v.refresh_period = it->get<std::optional<uint32_t>>(); 
  }
}