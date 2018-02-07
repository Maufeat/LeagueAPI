#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolLootLootRecipeGdsResource { 
    std::string id;
    std::string description;
    std::string imagePath; 
  };
  inline void to_json(json& j, const LolLootLootRecipeGdsResource& v) {
    j["id"] = v.id; 
    j["description"] = v.description; 
    j["imagePath"] = v.imagePath; 
  }
  inline void from_json(const json& j, LolLootLootRecipeGdsResource& v) {
    v.id = j.at("id").get<std::string>(); 
    v.description = j.at("description").get<std::string>(); 
    v.imagePath = j.at("imagePath").get<std::string>(); 
  }
}