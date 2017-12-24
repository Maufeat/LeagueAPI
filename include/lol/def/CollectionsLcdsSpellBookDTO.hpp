#pragma once
#include "../base_def.hpp" 
#include "CollectionsLcdsSpellBookPageDTO.hpp"
namespace lol {
  struct CollectionsLcdsSpellBookDTO { 
    uint64_t summonerId;
    std::string dateString;
    std::vector<CollectionsLcdsSpellBookPageDTO> bookPages; 
  };
  inline void to_json(json& j, const CollectionsLcdsSpellBookDTO& v) {
    j["summonerId"] = v.summonerId; 
    j["dateString"] = v.dateString; 
    j["bookPages"] = v.bookPages; 
  }
  inline void from_json(const json& j, CollectionsLcdsSpellBookDTO& v) {
    v.summonerId = j.at("summonerId").get<uint64_t>(); 
    v.dateString = j.at("dateString").get<std::string>(); 
    v.bookPages = j.at("bookPages").get<std::vector<CollectionsLcdsSpellBookPageDTO>>(); 
  }
}