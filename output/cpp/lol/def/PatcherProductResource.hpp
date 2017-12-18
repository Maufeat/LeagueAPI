#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PatcherComponentResource.hpp>
namespace lol {
  struct PatcherProductResource { 
    std::optional<uint32_t> refresh_period;
    std::vector<PatcherComponentResource> components;
    std::string id; 
  };
  inline void to_json(json& j, const PatcherProductResource& v) {
    if(v.refresh_period)
      j["refresh_period"] = *v.refresh_period;
    j["components"] = v.components; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, PatcherProductResource& v) {
    if(auto it = j.find("refresh_period"); it != j.end() && !it->is_null())
      v.refresh_period = it->get<std::optional<uint32_t>>(); 
    v.components = j.at("components").get<std::vector<PatcherComponentResource>>(); 
    v.id = j.at("id").get<std::string>(); 
  }
}