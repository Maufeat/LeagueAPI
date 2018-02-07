#pragma once
#include "../base_def.hpp" 
#include "CollectionsLcdsMasteryBookPageDTO.hpp"
namespace lol {
  struct CollectionsLcdsMasteryBookDTO { 
    uint64_t summonerId;
    std::string dateString;
    std::vector<CollectionsLcdsMasteryBookPageDTO> bookPages; 
  };
  inline void to_json(json& j, const CollectionsLcdsMasteryBookDTO& v) {
    j["summonerId"] = v.summonerId; 
    j["dateString"] = v.dateString; 
    j["bookPages"] = v.bookPages; 
  }
  inline void from_json(const json& j, CollectionsLcdsMasteryBookDTO& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.dateString = j.at("dateString").get<std::string>(); 
    v.bookPages = j.at("bookPages").get<std::vector<CollectionsLcdsMasteryBookPageDTO>>(); 
  }
}