#pragma once
#include "../base_def.hpp" 
namespace lol {
  struct LolCollectionsCollectionsMastery { 
    int32_t rank;
    uint32_t id; 
  };
  inline void to_json(json& j, const LolCollectionsCollectionsMastery& v) {
    j["rank"] = v.rank; 
    j["id"] = v.id; 
  }
  inline void from_json(const json& j, LolCollectionsCollectionsMastery& v) {
    v.rank = j.at("rank").get<int32_t>(); 
    v.id = j.at("id").get<uint32_t>(); 
  }
}