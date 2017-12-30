#pragma once
#include "../base_def.hpp" 
#include "CollectionsLcdsMasteryBookPageDTO.hpp"
namespace lol {
  struct CollectionsLcdsMasteryBookDTO { 
    std::vector<CollectionsLcdsMasteryBookPageDTO> bookPages;
    uint64_t summonerId;
    std::string dateString; 
  };
  inline void to_json(json& j, const CollectionsLcdsMasteryBookDTO& v) {
    j["bookPages"] = v.bookPages; 
    j["summonerId"] = v.summonerId; 
    j["dateString"] = v.dateString; 
  }
  inline void from_json(const json& j, CollectionsLcdsMasteryBookDTO& v) {
    v.bookPages = j.at("bookPages").get<std::vector<CollectionsLcdsMasteryBookPageDTO>>(); 
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.dateString = j.at("dateString").get<std::string>(); 
  }
}