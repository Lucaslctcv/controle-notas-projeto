# Controle de Notas – Projeto em C

## Descrição geral
Programa simples que permite cadastrar alunos, inserir notas, calcular a média e exibir a situação (aprovado ou reprovado).  
O objetivo é auxiliar professores no controle básico de desempenho dos alunos.

## Funcionalidades implementadas
- Cadastrar aluno (nome e matrícula).
- Inserir notas.
- Calcular média automaticamente.
- Definir situação (Aprovado/Reprovado).
- Listar alunos cadastrados.
- Validar entradas.
- Menu interativo em loop.

## Como compilar e executar

### 1. Acessar a pasta do código
```bash
cd src
```

### 2. Compilar
```bash
gcc main.c -o ../bin/controle_notas.exe
```

### 3. Executar
```bash
../bin/controle_notas.exe
```

No Windows, também é possível executar clicando no arquivo gerado.

## Estrutura do projeto
```
Controle_Notas_Projeto/
│
├── src/
│   ├── main.c
│   └── (executável gerado após compilar)
│
├── bin/
│   └── (executáveis gerados aqui)
│
├── docs/
│   ├── pseudocodigo.txt
│   ├── requisitos_eps.md
│   ├── uso_avancado.txt
│   └── testes.txt
│
├── backup/
│   └── backup_inicial.txt
│
└── README.md
```

## Autores
- Lucas Carneiro  
- Jennyfer Araújo

## Limitações atuais
- Dados não ficam salvos após fechar o programa.
- Limite de quantidade de alunos (tamanho fixo do vetor).
- Não há ordenação ou busca avançada.

## Melhorias futuras
- Implementar gravação e leitura em arquivo.
- Criar mais operações no menu.
- Modularizar em múltiplos arquivos .c e .h.
- Adicionar ordenação e busca.
- Melhorar mensagens e layout da listagem.
