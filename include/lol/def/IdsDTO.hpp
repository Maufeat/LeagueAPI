#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct IdsDTO { 
    std::vector<std::string> ids; 
  };
  inline void to_json(json& j, const IdsDTO& v) {
    j["ids"] = v.ids; 
  }
  inline void from_json(const json& j, IdsDTO& v) {
    v.ids = j.at("ids").get<std::vector<std::string>>(); 
  }
}