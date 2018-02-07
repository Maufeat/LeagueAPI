#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolCollectionsCollectionsMastery { 
    uint32_t id;
    int32_t rank; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsMastery& v) {
    j["id"] = v.id; 
    j["rank"] = v.rank; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsMastery& v) {
    v.id = j.at("id").get<uint32_t>(); 
    v.rank = j.at("rank").get<int32_t>(); 
  }
}