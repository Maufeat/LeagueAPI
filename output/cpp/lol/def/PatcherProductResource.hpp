#pragma once
#include<lol/base_def.hpp> 
#include <lol/def/PatcherComponentResource.hpp>
namespace lol {
  struct PatcherProductResource { 
    std::vector<PatcherComponentResource> components;
    std::string id;
    std::optional<uint32_t> refresh_period; 
  };
  void to_json(json& j, const PatcherProductResource& v) {
  j["components"] = v.components; 
  j["id"] = v.id; 
  j["refresh_period"] = v.refresh_period; 
  }
  void from_json(const json& j, PatcherProductResource& v) {
  v.components = j.at("components").get<std::vector<PatcherComponentResource>>(); 
  v.id = j.at("id").get<std::string>(); 
  v.refresh_period = j.at("refresh_period").get<std::optional<uint32_t>>(); 
  }
}