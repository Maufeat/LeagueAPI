#pragma once
#include "../base_op.hpp"
#include <functional> 
#include "../def/LolLobbyPartyMemberMetadataDto.hpp"
namespace lol {
  template<typename T>
  inline Result<Nothing> PutLolLobbyV1PartiesMetadata(T& _client, const LolLobbyPartyMemberMetadataDto& metadata)
  {
    try {
      return ToResult<Nothing>(_client.https.request("put", "/lol-lobby/v1/parties/metadata?" +
        SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(metadata).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  })));
    } catch(const SimpleWeb::system_error &e) {
      return ToResult<Nothing>(e.code());
    }
  }
  template<typename T>
  inline void PutLolLobbyV1PartiesMetadata(T& _client, const LolLobbyPartyMemberMetadataDto& metadata, std::function<void(T&, const Result<Nothing>&)> cb)
  {
    _client.httpsa.request("put", "/lol-lobby/v1/parties/metadata?" +
      SimpleWeb::QueryString::create(Args2Headers({  })), 
        json(metadata).dump(),
        Args2Headers({
          {"content-type", "application/json"},
        {"Authorization", _client.auth},  }),[cb,&_client](std::shared_ptr<HttpsClient::Response> response, const SimpleWeb::error_code &e) {
            if(e)
              cb(_client, ToResult<Nothing>(e));
            else
              cb(_client, ToResult<Nothing>(response));
        });
  }
}